/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2014 - Scilab Enterprises - Calixte DENIZET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

// This file has been generated, so don't modify it by hand !!

#ifndef __CHECK_TIMES_HXX__
#define __CHECK_TIMES_HXX__

#include "TIType.hxx"

namespace analysis
{
    inline static TIType check_times(GVN & gvn, const TIType & in0, const TIType & in1)
    {
        switch (in0.type)
        {
        case TIType::EMPTY :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in0;
            }
            case TIType::BOOLEAN :
            {
                return in0;
            }
            case TIType::COMPLEX :
            {
                return in0;
            }
            case TIType::DOUBLE :
            {
                return in0;
            }
            case TIType::INT16 :
            {
                return in0;
            }
            case TIType::INT32 :
            {
                return in0;
            }
            case TIType::INT64 :
            {
                return in0;
            }
            case TIType::INT8 :
            {
                return in0;
            }
            case TIType::STRING :
            {
                return in0;
            }
            case TIType::UINT16 :
            {
                return in0;
            }
            case TIType::UINT32 :
            {
                return in0;
            }
            case TIType::UINT64 :
            {
                return in0;
            }
            case TIType::UINT8 :
            {
                return in0;
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::BOOLEAN :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::DOUBLE, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::DOUBLE, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::DOUBLE, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::BOOLEAN, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::COMPLEX :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::COMPLEX, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::DOUBLE, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::DOUBLE, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT8, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in0.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::COMPLEX :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::COMPLEX, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::COMPLEX :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::COMPLEX, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::COMPLEX, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::COMPLEX, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::DOUBLE :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::DOUBLE, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::DOUBLE, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::COMPLEX :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::COMPLEX, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::COMPLEX, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::COMPLEX, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::DOUBLE, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::DOUBLE, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::DOUBLE, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::DOUBLEUINT :
            {
                if (in0.rows == 1 && in0.cols == 1 && in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT8, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::DOUBLEUINT :
        {
            switch (in1.type)
            {
            case TIType::DOUBLE :
            {
                if (in0.rows == 1 && in0.cols == 1 && in1.rows == 1 && in1.cols == 1)
                {
                    return in1;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLEUINT :
            {
                if (in0.rows == 1 && in0.cols == 1 && in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::INT16 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::INT32 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::INT64 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::INT8 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT8, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::INT8, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::INT8, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::INT8, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::STRING :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::STRING :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::STRING, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::STRING, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::UINT16 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::UINT32 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::UINT64 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        case TIType::UINT8 :
        {
            switch (in1.type)
            {
            case TIType::EMPTY :
            {
                return in1;
            }
            case TIType::BOOLEAN :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                return TIType(gvn);
            }
            case TIType::DOUBLE :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::INT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return TIType(gvn, TIType::UINT8, in1.rows, in1.cols);
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT16 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT16, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT16, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT32 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT32, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT32, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT64 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT64, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in0.cols);
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT64, in0.rows, in1.cols);
                }
                return TIType(gvn);
            }
            case TIType::UINT8 :
            {
                if (in0.isUnknownDims() || in1.isUnknownDims())
                {
                    return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
                }
                if (in0.rows == 1 && in0.cols == 1)
                {
                    return in1;
                }
                if (in1.rows == 1 && in1.cols == 1)
                {
                    return in0;
                }
                if (in1.rows == in0.cols)
                {
                    return TIType(gvn, TIType::UINT8, in0.rows, in1.cols);
                }
                return TIType(gvn, TIType::UINT8, /*scalar*/ false, /*unknown*/ true);
            }
            default :
                return TIType(gvn);
            }
            return TIType(gvn);
        }
        default :
            return TIType(gvn);
        }
    }

} // namespace analysis

#endif // __CHECK_times_HXX__