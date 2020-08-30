char* OrigFileText="Select ORIGINAL UNMODIFIED File to Use";
char* NewFileText="Select NEW MODIFIED File to Use";
char* NewIPSText="Select IPS File to Save As";
char* UseIPSText="Select IPS File to Use";
char* PatchFileText="Select File to Patch";

char* Menu_Log="Create a &Log File";
char* Menu_Header="Add/Remove SNES &Header";
char* Menu_Warnings="&Extra Warnings";

char* ROMTypeList="Most Common ROM Files\0*.smc;*.swc;*.sfc;*.nes;*.gb;*.gbc;*.gba;*.sms;*.smd;*.ngp\0All Files (*.*)\0*.*\0\0"; //*.vb;
char* IPSTypeList="IPS Patch Files (*.ips)\0*.ips\0All Files (*.*)\0*.*\0\0";

char* LipsErrorText[]={
"Unknown Error...", "An unspecified error has occured.", //0
"Couldn't open file for reading!", "The program could not open a file for reading.", //1
"Couldn't open file for writing!", "The program could not open a file for writing.", //2
"The file is marked as \"Read-Only\"!", "Right click on the file, select \"Properties\",\r\nand uncheck the \"Read-Only\" attribute.", //3
"Error!", "Must type in a file extension.", //4
"This is not an IPS file!", "This file is not an IPS file.", //5
"That's the exact same file!", "You should really choose two DIFFERENT file names to create a patch...", //6
"Failed to create patch for entire file!", "Your modified file has changes at or beyond the 16 MB mark.  The IPS format is unable to address those offsets.  The generated patch file will only contain changes below that point.", //7
"Patch Creation Complete!", "The IPS patch was successfully created!", //8
"Patching Complete!", "The file was successfully patched!", //9
"The files are identical!", "The generated patch will do nothing...", //10
"Error!", "Sorry, but the IPS patch format does not allow truncating files to sizes that are 16 MB or higher.", //11
"Possible IPS File Problem", "The file has been patched, but the data in the IPS file appears to be truncated or misaligned...", //12
"The file was patched, however...", "The patch doesn't define what to put in one or more of the expanded areas of the file.  While it's technically not required, it's usually a sign that you've patched a file of the wrong size.", //13

""
};

