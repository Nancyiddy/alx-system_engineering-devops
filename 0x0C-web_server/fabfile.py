#!/usr/bin/env python3
# Fabfile defining functions to pack, deploy, and clean the
# current directory to a remote server.
from fabric import task


@task
def pack(c):
    """Create a tar gzipped archive of the current directory."""
    c.run("touch holbertonwebapp.tar.gz")
    c.run("tar --exclude='*.tar.gz' -cvzf holbertonwebapp.tar.gz .")
