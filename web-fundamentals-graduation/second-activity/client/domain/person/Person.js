class Person {
    constructor(name = "", email = "", birth = "", wage = 0, role = "") {
        const listOfPersonNames = name.split(" ");

        if (listOfPersonNames.length < 2) throw new Error("O campo deve ter no mínimo o nome, segundo nome e/ou sobrenome ");

        this.validatePersonMajority(birth);

        this._name = name;
        this._email = email;
        this._birth = birth;
        this._wage = wage;
        this._role = role;
    }

    get name() {
        return this._name;
    }

    get email() {
        return this._email;
    }

    get birth() {
        return this._birth;
    }

    get wage() {
        return this._wage;
    }

    get role() {
        return this._role;
    }

    validatePersonMajority(birth) {
        const birthdayToDate = DateConverter.toDate(birth);
        const birthdayFullYear = birthdayToDate.getFullYear();
        const birthdayMonth = birthdayToDate.getMonth();
        const birthdayDay = birthdayToDate.getDay();

        const now = new Date();
        const currentFullYear = now.getFullYear();
        const currentMonth = now.getMonth() + 1;
        const currentDay = now.getDay();

        let age = currentFullYear - birthdayFullYear;

        if (currentMonth < birthdayMonth || currentMonth == birthdayMonth && currentDay < birthdayDay) {
            age--;
        }

        if (age < 0) age = 0;

        if (age < 18) throw new Error("O funcionário deve ser maior de idade para o cadastro!");
    }
}