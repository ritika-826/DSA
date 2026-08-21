/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m,vector<int>(n,-1));
        int r=0;
        int c=0,dir=0;
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        while(head!=NULL){
            arr[r][c]=head->val;
            head=head->next;
            int nr=r+dr[dir];
            int nc=c+dc[dir];
            if(nr <0 || nr >=m || nc <0 || nc >=n || arr[nr][nc]!=-1){
                dir=(dir+1)%4;

            }
            r=r+dr[dir];
            c=c+dc[dir];
        }
        return arr;

    }
};