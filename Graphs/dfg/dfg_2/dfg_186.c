//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1069794857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p[1], signed char p_7, int p_9,
                  unsigned int p_13, short p_15)
{
  char v_11;
  unsigned short v_5;
  unsigned long long v;
  unsigned char result;
  v_11 = (char)p_7;
  v_11 = (char)(((unsigned long long)p_13 - (18446744073709520278ULL * (unsigned long long)v_11) % 1222448109ULL) - 410887985ULL);
  v = 18446744073709488933ULL;
  v_5 = (unsigned short)(((unsigned long)(- (p_9 * (int)v_11)) - ((unsigned long)p_13 + 643854706UL)) - (unsigned long)p_15);
  result = (unsigned char)(((v - (unsigned long long)(-192300897L + (long)p[0])) / (unsigned long long)(
                            (674027250L / (long)((int)v_5 + 746)) / 7512L + 541L)) % (
                           ! (v >> ((int)p_7 & 63)) % (unsigned long long)(
                           (int)(- (! p[0])) + 215) + 61ULL));
  return result;
}


