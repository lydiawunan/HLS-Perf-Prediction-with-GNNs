#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252579736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, signed char p_15, double p_17, long long p_19,
                  long long p_21[3][2][2])
{
  double v_12;
  long long v_10;
  char v_8;
  double v_6;
  float v_4;
  long v;
  unsigned char result;
  v_12 = (double)p_19;
  v_8 = (char)p_21[1][0][1];
  v_6 = p_17;
  v_4 = -4597000192.f;
  v = (long)p_17;
  result = (unsigned char)137;
  if ((double)(! (-1717650759LL ^ ! p_21[2][1][0])) != v_6) {
    v_12 = (double)(751644613L / ((long)((double)(75 >> (v & 7L)) - - v_12) + 814L));
    v_4 = (float)(((long)v_8 & (v + 3476L)) | ((long)p_17 * p ^ (long)(
                                               -439.858612061 * v_12)));
    v_10 = (long long)(16L % (~ (p - (long)p_15) + 54L));
  }
  else {
    v_6 = (double)(- p_19);
    v_8 = (char)(~ 0);
    v_10 = - (4294934490LL % (p_19 + 909LL)) / ((long long)(((double)v_4 * -1478392470.88) / (
                                                            (double)(
                                                            (int)p_15 * (int)v_8) + 617.)) + 193LL);
  }
  while ((int)(0. / (- ((double)v_4 - v_6) + 420.)) >= (int)v_8) {
    v_12 = v_10 | 812LL;
    result = (unsigned char)p;
    v_4 = (float)(18446744073532020249ULL + (18446744073023157743ULL % (unsigned long long)(
                                             p + 30L)) / (unsigned long long)(
                                            v % 66L + 332L));
    v_6 = - v_12;
  }
  while_0_break: ;
  return result;
}


