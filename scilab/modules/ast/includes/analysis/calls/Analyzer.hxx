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

#ifndef __ANALYZER_HXX__
#define __ANALYZER_HXX__

namespace analysis
{
class AnalysisVisitor;
class CallExp;

class Analyzer
{

public:

    Analyzer() { }

    virtual bool analyze(AnalysisVisitor & visitor, ast::Exp & e) = 0;
};

} // namespace analysis

#endif // __ANALYZER_HXX__