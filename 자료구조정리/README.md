# 자료구조


# 스택

+ **먼저 들어간 것은 나중에 나온다!**
+  Last-In,First-out   LIFO


+ [배열로 스택 구현하기](https://github.com/Hyeongwon-up/Algorithm-DataStructure/tree/HW/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0%EC%A0%95%EB%A6%AC/Stack/src/com/company)

# 트리


![트리사진](https://user-images.githubusercontent.com/61967790/104779455-7e598500-57c2-11eb-8eea-7ef7dfd95fd0.png)

- 용어
    - 노드 (node) : 트리의 구성요소에 해당하는 A,B,C,D,E,F 와 같은  요소.
    - 간선 (edgje) : 노드와 노드를 연결하는 연결선
    - 루트 노드(root node) : 트리구조에서 최상위에 존재하는 A와 같은 노드.
    - 단말 노드(terminal node) : 자식 노드가 없는 C,D,E,F == leaf node 로도 불린다.
    - 내부 노드(internal node) : 단말 노드를제외한 모든 노드 A,B
    - 레벨 : 트리에서 각 층별로 숫자를 메김. 0에서 부터 시작.
    - 높이 : 트리의 최고 레벨.

-  Binary Tree( 이진 트리) 와 Sub Tree
    - Sub Tree : 큰 트리 안에 작은 트리
    
    - Binary Tree 란?
        - 루트 노드를 중심으로 두 개의 서브트리로 나누어 짐.
        - 나뉘어진 두 서브트리도 모두 이진 트리 이어야한다.
        
    - Full Binary Tree ?
        - 모든 레벨이 꽉 찬 이진 트리
    
    - Complete Binary Tree ?
        - 모든 레벨이 꽉 찬 상태는 아니지만, 차곡차곡 빈 틈 없이 노드가 채워진 이진 트리.( 노드가 위에서 아래로, 왼쪽에서 오른쪽 순서대로)
    
    
    ![순회](https://user-images.githubusercontent.com/61967790/104784367-78b46d00-57cb-11eb-8fad-9f0f3d7b8775.png)
    
    - 이진트리의 순회
   

        - 전위순회 (Preorder Traversal) : 루트노드먼저!
        - 중위순회 (Inorder Traversal) : 루트노드를 중간에!
        - 후외순회 (Postorder Traversal) : 루트노드를 마지막!
    
    
    - [이진트리구현(세가지 순회 함수 포함) _  use C++](https://github.com/Hyeongwon-up/Algorithm-DataStructure/blob/HW/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0%EC%A0%95%EB%A6%AC/%EC%9D%B4%EC%A7%84%ED%8A%B8%EB%A6%AC%EA%B5%AC%ED%98%84/main.cpp) 
        
        


