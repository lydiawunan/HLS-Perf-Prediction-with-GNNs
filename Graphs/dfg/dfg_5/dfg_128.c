//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117255845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  float v_8;
  double v_6;
  signed char v_4;
  signed char v;
  char result;
  v = (signed char)-127;
  v_6 = (double)(- (-15423L));
  v_4 = (signed char)700.714934741;
  v_8 = (float)(unsigned short)8853;
  result = (char)((- (18446744073141298561ULL + (unsigned long long)v) + (unsigned long long)(
                   2.28192760689e-35 / ((double)(~ v_4) + 206.))) + (unsigned long long)(
                  (v_6 / (double)(v_8 + 908.f) - (double)v_8) * 569.586386533));
  return result;
}


