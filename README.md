timecoin-miner
==============

A simple timecoin miner

# What's a timecoin?

A timecoin is a simple hash that is kept secret. It is produced by continually rehashing the same value. 
The theory is that a timecoin will provide a relative guarantee that the end hash will be kept unknown
for a set amount of time. Their weakness is that the amount of time required must be dedicated beforehand. 

# Making it a bit better

One should not trust a third party, but when you need something like a timecoin, you might have to trust a third party. 
This can be made safer by remaining as anonymous as possible, and taking the tiemcoin hash, hashing it a few times further, 
and then addng a secret salt to the hash. 

To later release the timecoin to the public is fairly easy. You would give the following info:

1. The initial timecoin seed value
2. The secret hash (indicating at what hash count to append the value) 
3. The final count of how many times the hash must be rehashed
4. A verification value

# Verification

Timecoins should be mined in parallel on equal-ish machines. This is to ensure that the timecoin is relatively good for that time. 

# Preventing advancement

It's not possible completely prevent a more powerful computer from computing the timecoin faster than you. 
However, there are a number of things that make it hard. 

The hashing is made both processor and memory intensive and is not parallizable. What we do is make a 128Mb block of memory. 
This memory contains X number of slots for the 32 byte digest of a SHA256 hash. To compute the next hash, 
the entire block of memory must be hashed. 

This should make specialist ASIC devices very hard to create, and should prevent FPGAs or GPUs from giving any speed ups. 
Basically, it's intended to only be computable from a traditional general purpose processor. 

# Error recovery

Because the risk of error can render a large amount of computation to waste, error recovery must be implemented. 

So, a file should be saved periodically with the current 128Mb block. The previous file should also be copied in case of 
error while saving. So, an ideal system would have at least 512Mb of RAM and 256Mb of free space. 

To prevent this from skewing results while mining, the timer counting how much a timecoin is worth, should be paused during this step. 

# This program

idk wtf it's going to do yet. 









