#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 278881150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, long long p_9, unsigned long p_11, int p_15,
         short p_21[2][3][5])
{
  unsigned short v_25;
  unsigned long long v_23;
  short v_19;
  unsigned char v_17;
  signed char v_13;
  float v_7;
  int v_5;
  short v;
  char result;
  v_25 = (unsigned short)p_11;
  v_23 = 18446744073059100786ULL;
  v_19 = (short)p;
  v_17 = (unsigned char)p_11;
  v_13 = (signed char)-44;
  v_7 = -2948284672.f;
  v_5 = 6147;
  v = (short)p;
  result = (char)-56;
  if (20043UL >= (unsigned long)(((int)v_13 * p_15) % ((int)(- v_7) + 299)) % (
                 (4294924507UL + (unsigned long)-7537962496.f) + 401UL)) {
    v_23 = 50443ULL;
    v_19 = (short)p_9;
    v_5 = (int)(! ((111ULL + v_23) % (unsigned long long)((int)v % ((int)((short)-1.94726659622e+37) + 386) + 946)));
  }
  else {
    result = (char)((unsigned long long)((1809160954 % (p + 68)) / (p_15 % (
                                                                    (int)v_17 + 177) + 954)) / (
                    ((unsigned long long)(p % (p + 690)) & v_23) + 912ULL));
    result = (char)(- p_15 + (-40944333 % (p + 972)) % ((int)result * (int)v_25 + 17));
    v_19 = (short)((unsigned long long)((int)(- result) * (int)(- v_19)) % (
                   (unsigned long long)6.70525549294e+37 / (18446744073709523233ULL / (
                                                            v_23 + 286ULL) + 453ULL) + 727ULL));
  }
  if ((unsigned long)(230L % (-19610394L / (long)((int)p_21[0][1][1] + 50) + 218L)) - (
      (unsigned long)(-681458984L * (long)p) + p_11 * (unsigned long)v_17) > (unsigned long)(
      (unsigned int)p + 1052410696U)) {
    v = (short)((p + -663581600) - v_5);
    result = (char)(~ ((int)(~ result) & (53990 >> 1)));
    result = (char)(- (-20067022.f * (float)((int)result - (int)v)));
  }
  else {
    v_13 = (signed char)((long long)v_17 | (p_9 / 27717LL) / (long long)(
                                           (int)v_19 + 537));
    v_7 = (float)((26657UL - (unsigned long)(4706 - (int)v_13)) + ! p_11 % (unsigned long)(
                                                                  (p_15 - -34) + 559));
    result = (char)((unsigned int)v_7 + (10029U >> (p_9 * (long long)p_11 & 31LL)));
  }
  return result;
}


