#ifndef IPCONVERT_H
#define IPCONVERT_H
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/*
* ABSTRACT: interpreter: converting types
*/
#include "kernel/structs.h"
#include "Singular/table.h"

int iiTestConvert (int inputType, int outputType, const struct sConvertTypes *dCT=dConvertTypes);
BOOLEAN iiConvert (int inputType, int outputType, int index,
                   leftv input, leftv output, const struct sConvertTypes *dCT=dConvertTypes);
#endif

