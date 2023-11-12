let list = [];
const row = 4;
const columns = 5;

const values = {
    0: 2,
    1: 3,
    2: 4,
    3: 5,
};

for (let externalIndex = 0; externalIndex < row; externalIndex++) {
    list[externalIndex] = [];
    for (let internalIndex = 0; internalIndex < columns; internalIndex++) {
        list[externalIndex][internalIndex] =
            values[externalIndex] * (internalIndex + 1);
    }
}

console.log(list);