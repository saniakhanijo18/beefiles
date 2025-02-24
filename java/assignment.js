const form = document.getElementById('contactForm');
const nameInput = document.getElementById('name');
const contactNumberInput = document.getElementById('contactNumber');
const contactList = document.getElementById('contactList');

form.addEventListener('submit', (event) => {
    event.preventDefault();

    const name = nameInput.value;
    const contactNumber = contactNumberInput.value;

    // Basic validation
    if (!isValidContactNumber(contactNumber)) {
        alert('Invalid contact number. Please enter a 10-digit number.');
        return;
    }

    // Create contact entry
    const contactEntry = document.createElement('div');
    contactEntry.textContent = ${name} - ${contactNumber};
    contactList.appendChild(contactEntry);

    // Clear input fields
    nameInput.value = '';
    contactNumberInput.value = '';
});

function isValidContactNumber(contactNumber) {
    const contactNumberRegex = /^\d{10}$/; // Matches 10 digits
    return contactNumberRegex.test(contactNumber);
}