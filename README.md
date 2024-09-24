1. Binary Search Tree (BST) - For Searching Books by Title

Data Structure: Binary Search Tree (BST)
Purpose: The BST is used to store and search books by their title in a structured, sorted manner.

Justification:

	•	The goal is to allow efficient insertion, deletion, and searching of books by title. Since a BST stores data in a sorted hierarchical manner, searching for a specific book can be done in O(log n) time on average, where n is the number of nodes (books).
	•	In a library system, searching for a book by title is a frequent operation. Using a BST helps maintain a sorted collection of titles, which is useful for both searching and displaying books in alphabetical order.

Why Not Another Structure:

	•	A simple array would require linear search (O(n)) for both searching and insertion, which is less efficient for large libraries.
	•	A hash map could provide faster lookups, but it would not keep the books sorted by title, which is a key requirement for displaying them alphabetically.

Operations Performed:

	•	Insert: Adding a new book to the library inserts it into the BST based on its title.
	•	Search: Searching for a book by title leverages the BST’s efficient searching capability.
	•	In-order Traversal: This allows all books to be retrieved in sorted order by title, which is useful when displaying available books.

2. Unordered Map (Hash Table) - For Fast Lookup by ISBN

Data Structure: Unordered Map (std::unordered_map)
Purpose: This structure is used to quickly access books by their ISBN numbers.

Justification:

	•	ISBNs are unique identifiers for books, and searching by ISBN needs to be extremely fast, especially when the library grows in size. Using an unordered map (hash table) allows constant time (O(1)) average case complexity for both insertions and lookups.
	•	The unordered map enables direct lookup by ISBN without needing to sort or traverse any structure, making it ideal for situations where books are fetched solely based on their ISBN.

Why Not Another Structure:

	•	A BST would require O(log n) time for searching by ISBN, which is less efficient than the constant-time lookups provided by a hash table.
	•	A list or array would also require linear time searches (O(n)), which is inefficient for larger datasets.

Operations Performed:

	•	Insert: When a new book is added, it is stored in the map with its ISBN as the key for fast retrieval.
	•	Search: Searching for a book by ISBN leverages the hash table’s constant time complexity.

3. Queue - For Managing Waitlists of Borrowed Books

Data Structure: Queue (std::queue)
Purpose: The queue is used to maintain a waitlist for books that have been borrowed.

Justification:

	•	A queue follows the First-In-First-Out (FIFO) principle, which is suitable for managing a waitlist where students who request a book first should be served first when the book is returned.
	•	The queue provides a simple and fair mechanism to handle requests in the order they are received. This makes it perfect for scenarios where multiple students are waiting to borrow the same book.

Why Not Another Structure:

	•	A stack (Last-In-First-Out) would not be appropriate here, as it would favor the last person added to the waitlist.
	•	Using a list or other data structure would add unnecessary complexity since the only operations needed are enqueue (add to the waitlist) and dequeue (process the next person), both of which are efficiently handled by a queue.

Operations Performed:

	•	Enqueue: When a student attempts to borrow a book that is already checked out, their name is added to the waitlist.
	•	Dequeue: When the book is returned, the next person in the waitlist is notified and given a chance to borrow the book.

Summary of Data Structure Choices:

	•	Binary Search Tree (BST): Used for searching and maintaining a collection of books by title. It efficiently supports ordered operations, such as listing books alphabetically and finding a book by its title.
	•	Unordered Map (Hash Table): Chosen for its constant-time access when searching for a book by its ISBN. This makes it an ideal structure for unique, fast lookups.
	•	Queue: Used for managing book waitlists. It ensures that students are served in the order they requested the book, providing fairness and simplicity.