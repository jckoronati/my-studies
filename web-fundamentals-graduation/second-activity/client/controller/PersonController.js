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
        
    }

    _resetForm() {
        this.name.value = "";
        this.email.value = "";
        this.birth.value = "";
        this.wage.value = "";
        this.role.value = "";
        this.totalAmount.value = "";
    }
}