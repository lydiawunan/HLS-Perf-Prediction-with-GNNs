#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 942187562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[2][1][5], short p_9, short p_11[4])
{
  float v_13;
  char v_7;
  signed char v_5;
  unsigned short v;
  short result;
  v_13 = 1.86166477548e+38f;
  v_5 = (signed char)3;
  result = p_9;
  v_5 = (signed char)(! (166 % ((int)p_11[3] + 357)) >> (((long)p_11[0] & 
                                                          (-49967L - (long)result) / (
                                                          (long)((float)v_5 - v_13) + 933L)) & 31L));
  v_7 = (char)v_5;
  v = (unsigned short)(3623973656UL % (unsigned long)(((long)(118 % (
                                                              (int)(- v_7) + 887)) | ! (
                                                       (long)p_9 * 47858L)) + 91L));
  result = (short)(! ((long long)v & -1033507385LL) / 716LL - (long long)(
                   (int)v_5 + (int)v_5));
  return result;
}


