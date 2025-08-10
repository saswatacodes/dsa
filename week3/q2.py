class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_end(self, val):
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node

    def insert_middle(self, pos, val):
        new_node = Node(val)
        curr = self.head
        for _ in range(pos-2):
            curr = curr.next
        new_node.next = curr.next
        curr.next = new_node

    def display(self):
        curr = self.head
        while curr:
            print(curr.data, end=" ")
            curr = curr.next

n = int(input())
vals = list(map(int, input().split()))
pos, val = map(int, input().split())
ll = LinkedList()
for v in vals:
    ll.insert_end(v)
ll.insert_middle(pos, val)
ll.display()
