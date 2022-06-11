class DateConverter {
    constructor () {
        throw new Error("This class not supposed to be instantiated");
    }

    static toDate(dateInString) {
        if (!/^\d{4}-\d{2}-\d{2}$/.test(dateInString)) throw new Error("The format expected is yyyy-mm-dd");

        return new Date(...dateInString.split('-').map((item, index) => item - index % 2));
    }
}