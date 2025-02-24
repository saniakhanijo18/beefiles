const form = document.getElementById("form");
const nameinput = document.getElementById("name");
const ageinput = document.getElementById("age");
const tablebody = document.getElementById("table-body");
const addbutton = document.getElementById("add-btn"); // Corrected this line to match the HTML

let editIndex = null;
let people = JSON.parse(localStorage.getItem("people")) || [];

form.addEventListener("submit", (e) => {
    e.preventDefault();
    const name = nameinput.value;
    const age = ageinput.value;
    
    if (editIndex === null) {
        people.push({ name, age });
    } else {
        people[editIndex] = { name, age };
        addbutton.innerText = "Add";
        editIndex = null;
    }
    
    localStorage.setItem("people", JSON.stringify(people));
    form.reset();
    renderTable(); // Call function to update the table after adding/editing
});

// Function to render the table
function renderTable() {
    tablebody.innerHTML = ''; // Clear the table before rendering
    people.forEach((person, index) => {
        const row = `<tr>
                        <td>${person.name}</td>
                        <td>${person.age}</td>
                        <td>
                            <button onclick="editPerson(${index})">Edit</button>
                            <button onclick="deletePerson(${index})">Delete</button>
                        </td>
                     </tr>`;
        tablebody.innerHTML += row;
    });
}

// Function to edit a person
function editPerson(index) {
    const person = people[index];
    nameinput.value = person.name;
    ageinput.value = person.age;
    addbutton.innerText = "Update";
    editIndex = index;
}

// Function to delete a person
function deletePerson(index) {
    people.splice(index, 1);
    localStorage.setItem("people", JSON.stringify(people));
    renderTable();
}

// Initial render of the table on page load
renderTable();