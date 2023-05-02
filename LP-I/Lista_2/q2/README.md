```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D[End];
```

```mermaid
flowchart LR;
    A[Start] --> B[Process 1];
    B --> C[Process 2];
    C --> D[Process 3];
    D --> E[End];
