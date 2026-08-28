#!/bin/bash

CONFIG="src/multi_agent_search/config/config.toml"
METRICS="output/metrics.csv"

# Remove old metrics file to start fresh
echo "Removing old $METRICS..."
rm -f "$METRICS"

for SEED in {1..5}; do
  # Update the seed in config.toml (assumes a line like: seed = 1)
  sed -i "s/^seed = .*/seed = $SEED/" "$CONFIG"
  echo "Running test with seed $SEED..."
  ros2 launch multi_agent_search multi_agent_search.launch.py num_robots:=5 num_targets:=2 agent_executable:=conscientious_reactive_agent evaluation_mode:=true > log_seed${SEED}.txt
  # Optionally, you can add a sleep or check for process completion here
  echo "Test with seed $SEED complete."
done

echo "All tests complete. Metrics are in $METRICS."
