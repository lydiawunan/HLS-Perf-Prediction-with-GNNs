//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 873105879
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, int p_5, unsigned long long p_11, float p_13,
                  int p_17)
{
  signed char v_19;
  float v_15;
  unsigned long v_9;
  char v_7;
  long v;
  unsigned char result;
  v_19 = (signed char)p_5;
  v_9 = 731770440UL;
  v_7 = (char)p_13;
  v_15 = (float)(~ ((- p_11 + 4014745491ULL) & (unsigned long long)((
                                                                    v_9 * (unsigned long)v_19) / 167UL)));
  v = (long)((((float)(v_9 % ((unsigned long)p_13 + 970UL)) + - v_15) + (float)p_11) - 
             (- p_13 - -886.281188965f) * (float)(! p_5 % (p_17 + 75)));
  v = (long)((unsigned long long)(~ (((unsigned long)v % 822602397UL) % (
                                     (v_9 | (unsigned long)p) + 578UL))) ^ (
             - (p_11 % 39255ULL) ^ (unsigned long long)v_9));
  result = (unsigned char)(((unsigned long)((v - -12194L) % (p + 893L)) % (unsigned long)(
                            (49U ^ (unsigned int)(~ p_5)) + 618U)) % (unsigned long)(
                           (int)v_7 + 1011));
  return result;
}


