public class Solution {
    public int CountStudents(int[] students, int[] sandwiches) {
        int uno=0,dos=0;
        for(int i=0;i<students.Length;i++){
            if(students[i]==1) dos++;
            else uno++;
        }
        for(int i=0;i<sandwiches.Length;i++){
            if(sandwiches[i]==0 && uno!=0){
                uno--;
            }
            else if(sandwiches[i]==1 && dos!=0){
                dos--;
            }
            else break;
        }
        GC.Collect();
        return uno+dos;
    }
}