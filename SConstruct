import os

env = Environment(
    ENV={'PATH' : os.environ['PATH'], 'HOME' : os.environ['HOME']},
    BUILDERS={
        'BCC': Builder(action='bcc32c -I include -o $TARGET -c $SOURCE'),
        'ILINK': Builder(action='ilink32 -Gn -x -L.\\lib;..\\..\\BCC102\\lib\\win32c\\release;..\\..\\BCC102\\lib\\win32c\\release\\psdk $SOURCES c0x32.obj,$TARGET,,import32 cw32'),
    },
)

def build(source):
    env.BCC([f"{source}.obj"], [f"{source}.cpp"])
    env.ILINK([f"{source}.exe"], [f"{source}.obj"])
    env.Clean([f"{source}.exe"], [f"{source}.tds"])

# build('print_std')
build('learn')
