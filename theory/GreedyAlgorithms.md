# Greedy Algorithm 
It is an algorithm that makes the locally optimal choice at each step 

## Scheduling
We want an algorithm that given n events start times and end times, find a schedule that includes as many of these events as it can.

An greedy aproach to this problem would be to always select the algorithm that ends earlier, this would work because chosing the events that end earlier means that we still have as a possibility all events that start later than this one ends and we only lose the ones that would end later, so we have more free space to allocate events that would not be possible when selecting ones that end later. 

