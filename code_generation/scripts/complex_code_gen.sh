#!/bin/bash
PYTHON_PROGRAM="code_gen_complex.py"

MAX_RETRIES=5

retries=0

TIMEOUT=3600

retries=0

OP_NUM=2

EXECUTE_NUM=300

for i in $(seq 1 $EXECUTE_NUM); do
    while true; do
        python $PYTHON_PROGRAM \
            --timeout $TIMEOUT \
            --op_num $OP_NUM \
    #### execution body ####
        # Check whether the program was successfully executed
        if [ $? -eq 0 ]; then
            break
        else
            retries=$((retries+1))
            if [ $retries -ge $MAX_RETRIES ]; then
                echo "Maximum number of retries reached. Exiting."
                break
            fi
            echo "Program failed. Retrying in 5 seconds..."
            sleep 5
        fi
    done
done
echo "All operations completed."