class PersonController {
    constructor() {
        this.name = document.querySelector("#name");
        this.email = document.querySelector("#email");
        this.birth = document.querySelector("#birth");
        this.wage = document.querySelector("#wage");
        this.role = document.querySelector("#role");
        this.totalAmount = document.querySelector("#totalAmount");
    }

    add(event) {
        event.preventDefault();
        
        try {
            const person = new Person(this.name.value, this.email.value, this.birth.value, this.wage.value, this.role.value);
    
            alert("O funcionário foi cadastrado");
    
            this._resetForm();
        } catch (error) {
            alert(error.message);
        }
    }

    change(event) {
        if (event.target.id === "role" && this.wage.value === "") {
            this.calculateWageBase(event.target.value);
        }

        if (event.target.id === "wage") {
            this.totalAmount.value = this.wage.value * 12;
        }
    }

    _resetForm() {
        this.name.value = "";
        this.email.value = "";
        this.birth.value = "";
        this.wage.value = "";
        this.role.value = "";
        this.totalAmount.value = "";
    }

    calculateWageBase(value) {
        if (value === "Gerente") {
            const wage = 21000.00;
            let wageAmount = wage * 0.1;

            this.wage.value = wage + wageAmount;
            this.totalAmount.value = this.wage.value * 12;
        }

        if (value === "Analista de Sistemas") {
            const wage = 11000.00;
            let wageAmount = wage * 0.05;

            this.wage.value = wage + wageAmount;
            this.totalAmount.value = this.wage.value * 12;
        }

        if (value === "Desenvolvedor") {
            const wage = 9500.00;

            this.wage.value = wage;
            this.totalAmount.value = this.wage.value * 12;
        }

        if (value === "DBA") {
            const wage = 10500.00;

            this.wage.value = wage;
            this.totalAmount.value = this.wage.value * 12;
        }
    }
}