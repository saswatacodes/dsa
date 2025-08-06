class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
        self.prev = None
    
def createNode(value):
    newNode = Node(value)
    return newNode

def deleteNode(position, head):
    curr = head
    temp = head
    i=1
    while(curr):
        if(i==position):
            temp = curr
            curr = temp.next
            curr.prev = temp.prev
            break
        curr = curr.next
        i+=1
    
    while(curr.prev != None):
        curr = curr.prev
    return curr

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
node5 = insertAtBeginning(5, node4)
head = deleteNode(3, node5)
printList(head)
