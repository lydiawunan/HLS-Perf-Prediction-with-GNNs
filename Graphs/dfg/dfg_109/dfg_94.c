#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40181243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned int p_5[3][5][3], unsigned short p_9,
         unsigned long long p_15)
{
  double v_21;
  unsigned char v_19;
  int v_17;
  short v_13;
  unsigned int v_11;
  signed char v_7;
  short v;
  char result;
  v_21 = 1.37822492644e+38;
  v_19 = (unsigned char)44;
  v_17 = (int)p_5[1][1][2];
  v_13 = (short)p;
  v = (short)(((unsigned long long)(~ ((int)v_13 % -7613)) ^ ! p_15) / (
              (unsigned long long)(- ((double)(v_17 / ((int)v_19 + 474)) / (
                                      v_21 / 733647435. + 375.))) + 698ULL));
  v_7 = (signed char)-85;
  v_11 = (unsigned int)-2.47818623123e+14f / 52804U + p_5[1][2][2];
  result = (char)((unsigned long long)((double)((unsigned int)((int)v / (
                                                               (int)p + 256)) % (
                                                ! p_5[1][0][2] + 141U)) + (
                                       -7.84682794012e+37 - (double)(
                                       (int)v_7 % ((int)p_9 + 51)))) / (
                  (8706ULL / (unsigned long long)((int)(! v) + 481) & (unsigned long long)(- (
                   80U % (v_11 + 477U)))) + 254ULL));
  return result;
}


