/*
Codeforces 292A - SMSC
Source: https://codeforces.com/problemset/problem/292/A

Problem statement (paraphrased):
An SMS center receives n chronologically ordered tasks; task i arrives at second
t[i] and adds c[i] messages to a FIFO queue. At each second, it first sends one
queued message if possible, then adds any newly arrived task, so a message that
arrives at that second cannot be sent immediately. Print the second when the
last message is sent and the maximum queue size reached.
*/
