#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495000505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned int p_4, unsigned long p_6, char p_13, long p_15)
{
  long long v_21;
  double v_19;
  char v_17;
  char v_11;
  unsigned short v_9;
  unsigned long long v;
  char result;
  v_21 = (long long)p_4;
  v_17 = (char)73;
  if ((long long)(((p_15 * 55236L) * ! p_15) * -30169L) >= ~ v_21) {
    v = (unsigned long long)-6.59527623052e+37;
    v_9 = (unsigned short)((unsigned long long)((unsigned long)(! p_13) | 
                                                (unsigned long)p_15 * p_6) % (
                           (- v - 3471898312ULL) + 83ULL));
    v_11 = (char)(~ (- (- (signed char)-56)));
  }
  else {
    v_19 = (double)(char)-45;
    v_9 = (unsigned short)(~ v_17);
    v_11 = (char)(((int)p_13 - (int)v_17) % 966 + (80 - (int)((unsigned char)v_19)));
  }
  if (~ (~ (p_4 & (unsigned int)v_9)) < (unsigned int)v_11) {
    result = (char)p_4;
    result = (char)(- (-97033918 % ((int)result + 912)) / (((int)result % 135 >> (
                                                            (p >> (p_4 & 31U)) & 31)) + 457));
  }
  else {
    result = (char)(- -31712L);
    v = (unsigned long long)result;
    result = (char)((unsigned long long)(- (! p_6)) / (- (v + 18446744073709546442ULL) + 102ULL));
  }
  return result;
}


