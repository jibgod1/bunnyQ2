#include <GL/glew.h>

GLuint gTimer;
float gTotalTimeElapsed = 0.0f;
int gTotalFrames = 0;

void init_timer() {
    glGenQueries(1, &gTimer);
}

void start_timing() {
    glBeginQuery(GL_TIME_ELAPSED, gTimer);
}

float stop_timing() {
    glEndQuery(GL_TIME_ELAPSED);

    GLint available = GL_FALSE;
    while (!available)
        glGetQueryObjectiv(gTimer, GL_QUERY_RESULT_AVAILABLE, &available);

    GLint result;
    glGetQueryObjectiv(gTimer, GL_QUERY_RESULT, &result);
    return result / 1e9f; // ns to sec
}
