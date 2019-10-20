// read mClientNumber and mClientName from inFile1
// read fClientNumber and fClientName from inFile2
// while ( atLeastOneFileNotAtEnd == true )
// if (inFile1 is EOF)
//  if (inFile2Written == false)
//  output fClientNumber, fClientName to Outputfile
//  inFile2Written = true
// endif
// else if (inFile2 is EOF)
    // if (inFile1Written == false)
    // output mClientNumber, mClientName to Outputfile
    // inFile1Written = true
// endif
// else if (mClientNumber < fClientNumber)
    // output mClientNumber, mClientName to Outputfile
    // inFile1Written = true
// else
    // output fClientNumber, fClientName to Outputfile
    // inFile2Written = true
// endif
//
//
// if ((inFile1 not EOF) AND (inFile1Written == true))
// read mClientNumber and mClientName from inFile1
// inFile1Written = false
// endif
// if ((inFile2 not EOF) AND (inFile2Written == true))
// read fClientNumber and fClientName from inFile2
// inFile2Written = false
// endif
// if ((inFile is EOF) AND (inFile2 is EOF))
// atLeastOneFileNotAtEnd = false
// endif
// endwhile
// close inFile1
// close inFile2
// close outFile1
// output "Merging Complete"
// Stop