import json

if __name__ == '__main__':
    name_set = set()
    FILE_PATH = '/code/OpGen-Verify/dataset/single_v1.0/generation.json'
    with open(FILE_PATH, 'r') as f:
        data = json.load(f)
    for _data in data:
        name_set.add(_data['op_name'])
    print(len(name_set))