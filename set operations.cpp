#include<iostream> 
using namespace std; 
int main() { 
    int i, j; 
    // Universal Set 
    int s; 
    cout << "Enter number of students in Universal set : "; 
    cin >> s; 
    int U[s]; 
    cout << "Enter roll numbers of all students :\n"; 
    for(i = 0; i < s; i++) { 
        cin >> U[i]; 
    } 
    int a; 
    cout << "Enter number of students in Drama Club : "; 
    cin >> a; 
    int A[a]; 
    cout << "Enter roll numbers of Drama Club members :\n"; 
    for(i = 0; i < a; i++) { 
        cin >> A[i]; 
    } 
    int b; 
    cout << "Enter number of students in Science Club : "; 
    cin >> b; 
    int B[b]; 
    cout << "Enter roll numbers of Science Club members :\n"; 
    for(i = 0; i < b; i++) { 
        cin >> B[i]; 
    } 
   // PRINTING SETS BEFORE CALCULATIONS  
    cout << "\n============================"; 
    cout << "\nUniversal Set : "; 
    for(i = 0; i < s; i++) { 
        cout << U[i] << " "; 
    } 
   cout << "\nDrama Club : "; 
    for(i = 0; i < a; i++) { 
        cout << A[i] << " "; 
    } 
    cout << "\nScience Club : "; 
    for(i = 0; i < b; i++) { 
        cout << B[i] << " "; 
    } 
    cout << "\n============================\n"; 
    // ==== UNION OF SETS ==== 
    int unionSet[s];   
    int uSize = 0; 
    for(i = 0; i < a; i++) { 
        unionSet[uSize++] = A[i]; 
    } 
    for(i = 0; i < b; i++) { 
        bool found = false; 
        for(j = 0; j < a; j++) { 
            if(B[i] == A[j]) { 
                found = true; 
                break; 
            } 
        } 
        if(!found) { 
            unionSet[uSize++] = B[i]; 
        } 
    } 
    cout << "\nStudents in at least one club (Union):\n"; 
    for(i = 0; i < uSize; i++) { 
        cout << unionSet[i] << " "; 
    } 
    // ==== INTERSECTION OF SETS ==== 
    cout << "\n\nStudents in both clubs (Intersection):\n"; 
    for(i = 0; i < a; i++) { 
        for(j = 0; j < b; j++) { 
            if(A[i] == B[j]) { 
                cout << A[i] << " "; 
                break; 
            } 
        } 
    } 
    // ==== DIFFERENCE OF SETS ==== 
    cout << "\n\nStudents in Drama Club only (A - B):\n"; 
    for(i = 0; i < a; i++) { 
        bool found = false; 
        for(j = 0; j < b; j++) { 
            if(A[i] == B[j]) { 
                found = true; 
                break; 
            } 
        } 
        if(!found) { 
            cout << A[i] << " "; 
        } 
    } 
 
    cout << "\n\nStudents in Science Club only (B - A):\n"; 
    for(i = 0; i < b; i++) { 
        bool found = false; 
        for(j = 0; j < a; j++) { 
            if(B[i] == A[j]) { 
                found = true; 
                break; 
            } 
        } 
        if(!found) { 
            cout << B[i] << " "; 
        } 
    } 
    // ==== COMPLEMENT ==== 
    cout << "\n\nStudents not in any club (U - (A ∪ B)):\n"; 
    for(i = 0; i < s; i++) { 
        bool found = false; 
        for(j = 0; j < uSize; j++) { 
            if(U[i] == unionSet[j]) { 
                found = true; 
                break; 
            } 
        } 
        if(!found) { 
            cout << U[i] << " "; 
        } 
    } 
    cout << endl; 
 
    return 0; 
}
