#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 38783705
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, short p_4[1], double p_6, unsigned short p_8, float p_13)
{
  char v_19;
  float v_17;
  short v_15;
  unsigned int v_11;
  short v;
  char result;
  v_19 = (char)p_13;
  v_17 = p_13;
  v_15 = (short)26713;
  v_11 = 3566449097U;
  v = (short)p;
  result = (char)-76;
  while ((double)(! (! (v_11 + 40461U))) == (double)(p_13 / ((-60.f - p_13) + 62.f)) / (
                                            - (- p_6) + 959.)) {
    v = (int)v_15 % -90;
    result = (char)((unsigned int)(((int)p_8 % ((int)v_19 + 797)) * (
                                   (int)p_8 - (int)v_19)) | 51531U);
    v_15 = (short)((unsigned long long)(~ p) - 18446744073709520195ULL / (
                                               18446744073385784006ULL % (unsigned long long)(
                                               (int)v + 616) + 932ULL));
    v_11 = (798715703U << (((int)p_4[0] - (int)p_4[0]) & 31)) | (unsigned int)(
           ((int)p_8 + 35) ^ (int)v_17);
  }
  while_0_break: ;
  result = (char)((p / (long)((int)p_4[0] + 940) - (long)((double)result / (
                                                          p_6 + 838.))) % (long)(
                  ((int)((double)p_8 / 1.3923348771e+38) - ((int)v + (int)result)) + 546));
  return result;
}


