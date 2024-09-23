# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummyhead = ListNode(0)
        curr= dummyhead
        carry = 0
        while l1 is not None or l2 is not None or carry is not 0:
            l1val = l1.val if l1 else 0
            l2val = l2.val if l2 else 0
            columnSum = l1val + l2val + carry
            carry = columnSum//10
            newNode = ListNode(columnSum%10)
            curr.next = newNode
            curr = newNode
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return dummyhead.next