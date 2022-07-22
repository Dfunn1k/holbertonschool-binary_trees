# C - Binary trees

This was a partner project in which we learned about the details, advantages,
and disadvantages of using trees as data structures. We learned about how to
qualify trees as well as how to traverse them. Throughout the project, we
implemented binary, binary search, AVL, and Max Binary Heap trees.

## Helper File :raised_hands:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary
trees in a pretty way.

## Header File :file_folder:

* [binary_trees.h](./binary_trees.h): Header file containing definitions and
prototypes for all types and functions written for the project.

## Data structures

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```

## Print function
[print_function](https://github.com/holbertonschool/0x1C.c)

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

## Tasks

##|File|Description
---|---|---
0|[New Node](0-binary_tree_node.c)|Write a function that creates a binary tree node
1|[Insert left](1-binary_tree_insert_left.c)|Write a function that inserts a node as the left-child of another node
2|[Insert right](2-binary_tree_insert_right.c)|Write a function that inserts a node as the right-child of another node
3|[Delete](3-binary_tree_delete.c)|Function that deletes an entire binary tree
4|[Is leaf](4-binary_tree_is_leaf.c)|Function that checks if a node is a leaf
5|[Is root](5-binary_tree_is_root.c)|Write a function that checks if a given node is a root
6|[Pre-order traversal](6-binary_tree_preorder.c)|Function that goes through a binary tree using pre-order traversal
7|[In-order traversal](7-binary_tree_inorder.c)|Function that goes through a binary tree using in-order traversal
8|[Post-order traversal](8-binary_tree_postorder.c)|Function that goes through a binary tree using post-order traversal
9|[Height](9-binary_tree_height.c)|Function that measures the height of a binary tree
10|[Depth](10-binary_tree_depth.c)|Function that measures the depth of a node in a binary tree
11|[Size](11-binary_tree_size.c)|Function that measures the size of a binary tree
12|[Leaves](12-binary_tree_leaves.c)|Function that counts the leaves in a binary tree
13|[Nodes](13-binary_tree_nodes.c)|Function that counts the nodes with at least 1 child in a binary tree
14|[Balance factor](14-binary_tree_balance.c)|Function that measures the balance factor of a binary tree
15|[Is full](15-binary_tree_is_full.c)|Function that checks if a binary tree is full
16|[Is perfect](16-binary_tree_is_perfect.c)|Function that checks if a binary tree is perfect
17|[Sibling](17-binary_tree_sibling.c)|Function that finds the sibling of a node
18|[Uncle](18-binary_tree_uncle.c)|Function that finds the uncle of a node
27|[BST - Search](113-bst_search.c)|Function that searches for a value in a Binary Search Tree
29|[Big O #BST](115-O)|average time complexities of those operations on a Binary Search Tree: Inserting the value n, Removing the node with the value n, Searching for a node in a BST of size n

## Authors:
* Christian Varas | <img alt="GitHub" width="26px" src="https://raw.githubusercontent.com/github/explore/78df643247d429f6cc873026c0622819ad797942/topics/github/github.png" />[GitHub](https://github.com/ChristianVaras)
* Dany Chavez |   <img alt="GitHub" width="26px" src="https://raw.githubusercontent.com/github/explore/78df643247d429f6cc873026c0622819ad797942/topics/github/github.png" /> [GitHub](https://github.com/BigDany1792)