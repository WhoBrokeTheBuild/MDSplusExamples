
import sys
import MDSplus

experiment = "example"
shot = -1

if len(sys.argv) >= 2:
    experiment = sys.argv[1]
    
if len(sys.argv) >= 3:
    shot = int(sys.argv[2])
    
tree = MDSplus.Tree(experiment, shot)

print('Successfully opened', tree)
