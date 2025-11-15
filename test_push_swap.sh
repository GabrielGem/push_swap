#!/bin/bash

# --- Configuration ---
NUM_RUNS=100       # How many times to loop
NUM_COUNT=500      # How many numbers to generate (500)
NUM_RANGE="0-2147483647" # Range of numbers
RESULTS_FILE="results.txt"
PUSH_SWAP_BIN="./push_swap"

# --- Check for required program ---
if [ ! -f "$PUSH_SWAP_BIN" ]; then
    echo "Error: $PUSH_SWAP_BIN not found."
    exit 1
fi

# --- Main Script ---

# Clear the results file for a fresh run
> "$RESULTS_FILE"

echo "Running $NUM_RUNS tests with $NUM_COUNT numbers..."

for i in $(seq 1 $NUM_RUNS)
do
    # 1. Generate 500 random numbers and store them as a single,
    #    space-separated string in the ARG variable.
    ARG=$(shuf -i "$NUM_RANGE" -n "$NUM_COUNT" | paste -sd ' ')

    # 2. Run push_swap, pipe its output (the instructions) directly to wc -l
    COUNT=$( "$PUSH_SWAP_BIN" $ARG | wc -l )

    # 3. Append the line count to our results file
    echo $COUNT >> "$RESULTS_FILE"
    echo "Run $i/$NUM_RUNS: ($COUNT moves)"
    
done

echo "---"
echo "All tests complete. Analyzing results..."
echo "---"

# 4. Use awk to sum all values and calculate the average
awk '
    { 
        # Add the value of the first column (the count) to the sum
        sum += $1 
    } 
    END { 
        # NR is the total Number of Records (lines)
        if (NR > 0) {
            print "Total runs logged:", NR
            print "Total operations (all runs):", sum
            print "Average operations per run:", sum / NR
        } else {
            print "No runs were recorded in results.txt."
        }
    }
' "$RESULTS_FILE"
