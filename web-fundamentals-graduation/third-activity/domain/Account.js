class Account {
    constructor (number, initialBalance) {
        this._number = number;
        this._initialBalance = initialBalance;
    }

    get number() {
        return this._number;
    }

    get initialBalance() {
        return this._initialBalance;
    }
}

export { Account };