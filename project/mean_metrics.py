import os
import pandas as pd

DATA_DIR = "data"
COLUMNS = [
    "time_to_first_target",
    "time_to_all_targets",
    "cumulative_distance",
    "map_coverage_pct",
    "redundant_search_pct"
]

def main():
    for filename in os.listdir(DATA_DIR):
        if filename.endswith(".csv"):
            filepath = os.path.join(DATA_DIR, filename)
            df = pd.read_csv(filepath)
            print(f"File: {filename}")
            for col in COLUMNS:
                if col in df.columns:
                    values = pd.to_numeric(df[col], errors='coerce')
                    valid_count = values.count()
                    missing_count = values.isna().sum()
                    mean = values.mean()
                    std = values.std()
                    print(f"  {col}: mean={mean:.3f}, std={std:.3f}, n={valid_count}, missing={missing_count}")
                else:
                    print(f"  {col}: column not found")
            print()

if __name__ == "__main__":
    main()