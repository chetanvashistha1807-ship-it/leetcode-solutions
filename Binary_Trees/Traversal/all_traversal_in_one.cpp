void allTraversals(Node* root) {

    vector<int> preorder, inorder, postorder;

    stack<pair<Node*, int>> st;

    if(root == NULL) return;

    st.push({root, 1});

    while(!st.empty()) {

        Node* node = st.top().first;
        int state = st.top().second;

        // PREORDER
        if(state == 1) {

            preorder.push_back(node->data);

            st.top().second++;

            if(node->left != NULL) {
                st.push({node->left, 1});
            }
        }

        // INORDER
        else if(state == 2) {

            inorder.push_back(node->data);

            st.top().second++;

            if(node->right != NULL) {
                st.push({node->right, 1});
            }
        }

        // POSTORDER
        else {

            postorder.push_back(node->data);

            st.pop();
        }
    }
}