#ifndef __REPLACE_DB_LEFDEF__
#define __REPLACE_DB_LEFDEF__ 0

#include "db.h"
#include "lefdefIO.h"

void FillReplaceStructures(ads::dbDatabase* db);
void FillReplaceParameter(ads::dbDatabase* db);
void FillReplaceModule(ads::dbSet<ads::dbInst> &insts);
void FillReplaceTerm(ads::dbSet<ads::dbInst> &insts, ads::dbSet<ads::dbBTerm> &bterms);
void FillReplaceRow(ads::dbSet<ads::dbRow> &rows);
void FillReplaceNet(ads::dbSet<ads::dbNet> &nets);
void GenerateDummyCellDb(ads::dbSet<ads::dbRow> &rows);


DieRect GetDieFromDb(ads::dbBox &bBox, bool isScaleDown = false);
DieRect GetCoreFromDb(ads::dbSet<ads::dbRow> &rows, bool isScaleDown = false);

void WriteDefDb(ads::dbDatabase* db, const char* defName);

#endif