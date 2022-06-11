const personController = new PersonController();

document.querySelector("#formPerson").addEventListener("change", personController.change.bind(personController));
document.querySelector("#formPerson").addEventListener("submit", personController.add.bind(personController));