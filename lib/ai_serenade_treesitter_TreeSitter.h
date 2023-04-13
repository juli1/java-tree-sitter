/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ai_serenade_treesitter_TreeSitter */

#ifndef _Included_ai_serenade_treesitter_TreeSitter
#define _Included_ai_serenade_treesitter_TreeSitter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeChild
 * Signature: (Lai/serenade/treesitter/Node;I)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeChild
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeChildCount
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeChildCount
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeChildByFieldName
 * Signature: (Lai/serenade/treesitter/Node;Ljava/lang/String;)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeChildByFieldName
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeStartPosition
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Position;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeStartPosition
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeEndPosition
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Position;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeEndPosition
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeHasError
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeHasError
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeEndByte
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeEndByte
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeStartByte
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeStartByte
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeString
 * Signature: (Lai/serenade/treesitter/Node;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeType
 * Signature: (Lai/serenade/treesitter/Node;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeType
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserNew
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_parserNew
  (JNIEnv *, jclass);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_parserDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserSetLanguage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_parserSetLanguage
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserParseBytes
 * Signature: (J[BI)J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_parserParseBytes
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorNew
 * Signature: (Lai/serenade/treesitter/Node;)J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorNew
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentTreeCursorNode
 * Signature: (J)Lai/serenade/treesitter/TreeCursorNode;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentTreeCursorNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentFieldName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentFieldName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentNode
 * Signature: (J)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoFirstChild
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoFirstChild
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoNextSibling
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoNextSibling
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoParent
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoParent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_treeDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeRootNode
 * Signature: (J)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeRootNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryNew
 * Signature: (JLjava/lang/String;)Lai/serenade/treesitter/query/internals/QueryCreationResult;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_queryNew
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_queryDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCursorDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCursorDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCursorNew
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCursorNew
  (JNIEnv *, jclass);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCursorNextMatch
 * Signature: (J)Lai/serenade/treesitter/query/QueryMatch;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCursorNextMatch
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCursorExec
 * Signature: (JJLai/serenade/treesitter/Node;)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCursorExec
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCaptureCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCaptureCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    queryCaptureNameForId
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_queryCaptureNameForId
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
