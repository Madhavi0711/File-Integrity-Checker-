# File-Integrity-Checker-
It is file verification using hash
*Working Mechanism*

Step-by-Step Functionality:

1. Input:

User is prompted to enter the filename of the file to check.



2. File Reading:

The file content is read using the readFile() function.



3. Hashing:

SHA-256 hash is generated for the current file content using sha256().



4. Previous Hash Retrieval:

The tool retrieves the last known hash from storage using getPreviousHash().

