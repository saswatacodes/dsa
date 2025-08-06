class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
        self.prev = None
    
def createNode(value):
    newNode = Node(value)
    return newNode

def insertAtBeginning(value, head):
    node1 = createNode(value)
    node1.next = head
    if head is not None:
        head.prev = node1
    return node1

def printList(head):
    while(head):
        print(head.data, " ")
        head = head.next

node = createNode(1)
node2 = insertAtBeginning(2, node)
node3 = insertAtBeginning(3, node2)
node4 = insertAtBeginning(4, node3)
printList(node4)
