//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 452897876
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned char p_5, long p_9, double p_11,
                  long long p_13)
{
  signed char v_19;
  double v_17;
  char v_15;
  int v_7;
  unsigned char v;
  unsigned char result;
  v_19 = (signed char)-78;
  v_17 = (double)p;
  v_15 = (char)-48;
  v_19 = (signed char)(~ ((unsigned long long)-4.81338361519e+37 / ((
                                                                    (unsigned long long)v_19 / 51483ULL - (unsigned long long)-1076172837.88) + 860ULL)));
  v_7 = (int)(- (((long)v_17 | (long)v_19 % (p_9 + 124L)) + (long)p_5));
  v = (unsigned char)(((unsigned long long)((long long)p_11 / (p_13 + 137LL)) % 16233ULL) / (unsigned long long)(
                      (int)(- v_15) + 140) ^ 37777ULL);
  result = (unsigned char)((long)(~ (((int)v + (int)v) | (int)p * (int)p_5)) - 
                           (long)v_7 % (! (- p_9) + 178L));
  return result;
}


